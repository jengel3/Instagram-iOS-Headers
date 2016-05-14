/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGHScrollAYMFCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGHScrollAYMFCellItemControllerDelegate;
@class IGFeaturedUserInfo, NSString;

@interface IGHScrollAYMFCellItemController : IGListItemController <IGHScrollAYMFCellDelegate, IGListItemType> {

	id<IGHScrollAYMFCellItemControllerDelegate> _delegate;
	IGFeaturedUserInfo* _userInfo;
	int _cellType;

}

@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int cellType;                                                           //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2 ;
-(id)initWithCellType:(int)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFCellItemControllerDelegate>)arg1 ;
-(id<IGHScrollAYMFCellItemControllerDelegate>)delegate;
-(IGFeaturedUserInfo *)userInfo;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(int)cellType;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end
