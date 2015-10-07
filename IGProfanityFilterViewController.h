/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class UIActivityIndicatorView;

@interface IGProfanityFilterViewController : IGGroupedTableViewController {

	char _initialProfanityFilterSetting;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(char)prefersTabBarHidden;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

