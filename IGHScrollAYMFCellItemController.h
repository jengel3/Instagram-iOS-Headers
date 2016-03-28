
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGHScrollAYMFCellDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGHScrollAYMFCellItemControllerDelegate;
@class IGFeaturedUserInfo, NSString;

@interface IGHScrollAYMFCellItemController : IGListItemController <IGHScrollAYMFCellDelegate, IGRaindropAnalyticsDelegate, IGListItemType> {

	id<IGHScrollAYMFCellItemControllerDelegate> _delegate;
	IGFeaturedUserInfo* _userInfo;

}

@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(id)initWithFeaturedUserInfo:(id)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFCellItemControllerDelegate>)arg1 ;
-(id<IGHScrollAYMFCellItemControllerDelegate>)delegate;
-(IGFeaturedUserInfo *)userInfo;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

