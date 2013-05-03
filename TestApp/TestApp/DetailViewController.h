//
//  DetailViewController.h
//  TestApp
//
//  Created by James Hedrick on 5/3/13.
//  Copyright (c) 2013 James Hedrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
