

@class IGEventFeedData, NSMutableArray;

@interface IGEventFeedDataCache : NSObject {

	IGEventFeedData* _lastSeenPage;
	NSMutableArray* _pages;

}

@property (nonatomic,retain) IGEventFeedData * lastSeenPage;              //@synthesize lastSeenPage=_lastSeenPage - In the implementation block
@property (nonatomic,retain) NSMutableArray * pages;                      //@synthesize pages=_pages - In the implementation block
-(id)pageThatContainsPost:(id)arg1 ;
-(void)resetCacheWithPost:(id)arg1 ;
-(id)trimmedPageWithStartIndex:(unsigned)arg1 originalPage:(id)arg2 ;
-(void)updateCacheWithPage:(id)arg1 ;
-(void)removePost:(id)arg1 ;
-(void)setLastSeenPage:(IGEventFeedData *)arg1 ;
-(void)updateWithLastSeenPost:(id)arg1 ;
-(void)removeDuplicatePostsFromPage:(id)arg1 ;
-(IGEventFeedData *)lastSeenPage;
-(id)allPages;
-(id)init;
-(void)addPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(NSMutableArray *)pages;
-(void)setPages:(NSMutableArray *)arg1 ;
@end

