//
//  ViewController.h
//  Maze
//
//  Created by Derrick Chie on 10/5/13.
//  Copyright (c) 2013 Derrick Chie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/CAAnimation.h>
// QuartzCore is used for image processing and video image processing

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *pacman;
@property (strong, nonatomic) IBOutlet UIImageView *ghost1;
@property (strong, nonatomic) IBOutlet UIImageView *ghost2;
@property (strong, nonatomic) IBOutlet UIImageView *ghost3;
@property (strong, nonatomic) IBOutlet UIImageView *exit;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *wall;

@end
