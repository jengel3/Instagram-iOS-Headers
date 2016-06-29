
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentLoadItemDelegate;
@class IGCommentLoadMore, IGLabelSupplementaryViewSource, NSString;

@interface IGCommentLoadItemController : IGListItemController <IGListItemType> {

	id<IGCommentLoadItemDelegate> _delegate;
	IGCommentLoadMore* _loadMore;
	IGLabelSupplementaryViewSource* _labelViewSource;

}

@property (nonatomic,readonly) IGCommentLoadMore * loadMore;                                //@synthesize loadMore=_loadMore - In the implementation block
@property (nonatomic,retain) IGLabelSupplementaryViewSource * labelViewSource;              //@synthesize labelViewSource=_labelViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentLoadItemDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGLabelSupplementaryViewSource *)labelViewSource;
-(void)setLabelViewSource:(IGLabelSupplementaryViewSource *)arg1 ;
-(IGCommentLoadMore *)loadMore;
-(void)setDelegate:(id<IGCommentLoadItemDelegate>)arg1 ;
-(id<IGCommentLoadItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

