
#import <Instagram/IGListAdapterDataSource.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate;
@class NSArray, NSString;

@interface IGEventViewerDataSource : NSObject <IGListAdapterDataSource> {

	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;
	NSArray* _posts;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,copy) NSArray * posts;                                                                         //@synthesize posts=_posts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(NSArray *)posts;
-(id)initWithPosts:(id)arg1 ;
-(void)setPosts:(NSArray *)arg1 ;
-(id)allPosts;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(void)appendPosts:(id)arg1 ;
-(void)replacePostsWithPosts:(id)arg1 ;
-(void)deletePostAtIndexPath:(id)arg1 ;
-(id)postAtIndexPath:(id)arg1 ;
-(id)indexPathForPost:(id)arg1 ;
-(void)setMediaCellDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(void)setHeaderCellDelegate:(id<IGEventViewerAttributionHeaderCellDelegate>)arg1 ;
-(unsigned)count;
-(id)init;
@end

