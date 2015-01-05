//
//  ViewController.h
//  Reality TV Show Name Generator
//
//  Created by Mollie on 12/6/14.
//  Copyright (c) 2014 Proximity Viz LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RandomName;

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *tvShowLabel;
@property (strong, nonatomic) RandomName *randomName;
- (IBAction)generateName;


@end
