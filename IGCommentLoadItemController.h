
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentLoadItemDelegate;
@class IGCommentLoadMore, IGHeaderFooterSupplementaryViewSource, NSString;

@interface IGCommentLoadItemController : IGListItemController <IGListItemType> {

	id<IGCommentLoadItemDelegate> _delegate;
	IGCommentLoadMore* _loadMore;
	IGHeaderFooterSupplementaryViewSource* _compositedViewSource;

}

@property (nonatomic,readonly) IGCommentLoadMore * loadMore;                                            //@synthesize loadMore=_loadMore - In the implementation block
@property (nonatomic,retain) IGHeaderFooterSupplementaryViewSource * compositedViewSource;              //@synthesize compositedViewSource=_compositedViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentLoadItemDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGHeaderFooterSupplementaryViewSource *)compositedViewSource;
-(void)setCompositedViewSource:(IGHeaderFooterSupplementaryViewSource *)arg1 ;
-(IGCommentLoadMore *)loadMore;
-(void)setDelegate:(id<IGCommentLoadItemDelegate>)arg1 ;
-(id)init;
-(id<IGCommentLoadItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

