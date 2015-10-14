/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class NSString;

@interface IGUsertagSettingsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler> {

	int _savedReviewSetting;
	int _selectedReviewSetting;
	char _isLoading;
	int _photoCount;

}

@property (assign,nonatomic) int photoCount;                        //@synthesize photoCount=_photoCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(id)tableView:(id)arg1 subtitleForHeaderInSection:(int)arg2 ;
-(void)setPhotoCount:(int)arg1 ;
-(void)onDoneButtonTapped;
-(void)submitWithStartHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)submitWithRemoveAll:(char)arg1 startHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(int)photoCount;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
@end

