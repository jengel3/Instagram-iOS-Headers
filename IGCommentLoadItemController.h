
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentLoadStoryDelegate;
@class IGCommentLoadMore, NSString;

@interface IGCommentLoadItemController : IGListItemController <IGListItemType> {

	id<IGCommentLoadStoryDelegate> _delegate;
	IGCommentLoadMore* _loadMore;

}

@property (assign,nonatomic,__weak) id<IGCommentLoadStoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentLoadMore * loadMore;                                //@synthesize loadMore=_loadMore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(unsigned)numberOfItemsInListAdapter:(id)arg1 ;
-(CGSize)listAdapter:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(id)listAdapter:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)listAdapter:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)setLoadMore:(IGCommentLoadMore *)arg1 ;
-(IGCommentLoadMore *)loadMore;
-(void)setDelegate:(id<IGCommentLoadStoryDelegate>)arg1 ;
-(id<IGCommentLoadStoryDelegate>)delegate;
@end

