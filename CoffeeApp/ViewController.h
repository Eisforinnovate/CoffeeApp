//
//  ViewController.h
//  CoffeeApp
//
//  Created by Yatoomy Grey on 2015-01-06.
//  Copyright (c) 2015 Neutun Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *waterTextField;
@property (weak, nonatomic) IBOutlet UITextField *ratioTextField;
@property (weak, nonatomic) IBOutlet UITextField *coffeeTextField;

- (IBAction)calculateButtonPressed:(id)sender;

@end

