
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGHScrollBubbleCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGHScrollBubbleCellItemControllerDelegate;
@class NSString;

@interface IGHScrollBubbleCellItemController : IGListItemController <IGHScrollBubbleCellDelegate, IGListItemType> {

	id<IGHScrollBubbleCellItemControllerDelegate> _delegate;
	id _item;

}

@property (assign,nonatomic,__weak) id<IGHScrollBubbleCellItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id item;                                                                  //@synthesize item=_item - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)didTapBubbleCell:(id)arg1 ;
-(void)setDelegate:(id<IGHScrollBubbleCellItemControllerDelegate>)arg1 ;
-(id<IGHScrollBubbleCellItemControllerDelegate>)delegate;
-(id)item;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

