//
//  MainViewController.h
//  Reality TV Show Name Generator
//
//  Created by Mollie on 12/6/14.
//  Copyright (c) 2014 Proximity Viz LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RandomName;

@interface MainViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *tvShowLabel;
@property (weak, nonatomic) NSString *currentName;
@property (strong, nonatomic) RandomName *randomName;
@property (strong, nonatomic) UIActivityViewController *activityViewController;

@property (nonatomic) BOOL returningToMain;
@property (nonatomic) NSMutableArray *favorites;
@property (nonatomic) NSMutableArray *recentItems;


@end

