//
//  ReminderViewController.h
//  ReminderGenerator
//
//  Created by Jeff Dean on 6/19/13.
//  Copyright (c) 2013 Doubled Rooks Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReminderViewController : UIViewController

- (IBAction)didTapCreateReminderButton:(id)sender;
- (IBAction)didTapDeleteAllButton:(id)sender;
@property (strong, nonatomic) IBOutlet UILabel *flashLabel;

@end
