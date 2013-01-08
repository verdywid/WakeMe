//
//  WMSoundsListViewController.h
//  WakeMe
//
//  Created by Agustinus Verdy Widyawiradi on 8/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@class WMSoundsListViewController;

@protocol WMSoundsListViewControllerDelegate <NSObject>
 @required
  - (void)soundSelectionSelectSound:(NSString *)selectedSound;
@end


@interface WMSoundsListViewController : UITableViewController {
  NSArray *_soundNames;
  NSInteger _selRow;
  
  __weak id<WMSoundsListViewControllerDelegate> _soundSelectionDelegate;
}

@property(nonatomic, readonly) NSArray *soundNames;
@property(nonatomic, readonly) NSInteger selRow;

@property(nonatomic, weak) id<WMSoundsListViewControllerDelegate> soundSelectionDelegate;

- (void)selectSoundWithName:(NSString *)selectedSoundName;

- (IBAction)doneSelectSound:(id)sender;

@end