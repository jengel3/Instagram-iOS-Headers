
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

@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int cellType;                                                           //@synthesize cellType=_cellType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
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

