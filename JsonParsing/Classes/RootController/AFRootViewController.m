//
//  AFRootViewController.m
//  JsonParsing
//
//  Created by Apple on 04/11/2022.
//

#import "AFRootViewController.h"
#import "AFTwitterSample.h"
#import "JsonParsing.h"

@interface AFRootViewController ()

@end

@implementation AFRootViewController {
    AFTwitterSample *model;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)showAlertView:(id)sender {
    UIAlertController *controller = [UIAlertController alertControllerWithTitle:@"ThumbsUp" message:@"Hurrah you found it" preferredStyle:UIAlertControllerStyleAlert];
    [controller addAction:[UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:nil]];
   
    [self presentViewController:controller animated:YES completion:^{
        dispatch_async(dispatch_get_main_queue(), ^{
            NSError *error = nil;
            self->model = [[AFTwitterSample alloc] initWithData:[JsonParsing.sharedInstance loadFileDataNamed:@"TwitterSample"] error:&error];
            if (error) {
                NSLog(@"Error While reading Data %@", error.localizedDescription);
            }
            else {
                NSLog(@"success === \n %@",self->model.createdAt);
                NSLog(@"\n %@",self->model.user.name);

            }
        });
    }];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
