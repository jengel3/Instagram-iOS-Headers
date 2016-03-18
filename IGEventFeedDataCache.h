

@class IGEventFeedData, NSMutableArray;

@interface IGEventFeedDataCache : NSObject {

	IGEventFeedData* _lastSeenPage;
	NSMutableArray* _pages;

}

@property (nonatomic,retain) IGEventFeedData * lastSeenPage;              //@synthesize lastSeenPage=_lastSeenPage - In the implementation block
@property (nonatomic,retain) NSMutableArray * pages;                      //@synthesize pages=_pages - In the implementation block
-(void)updateCacheWithPage:(id)arg1 ;
-(unsigned)pageIndexThatContainsPostAtSection:(unsigned)arg1 ;
-(void)resetCacheWithPost:(id)arg1 ;
-(id)trimmedPageWithStartIndex:(unsigned)arg1 originalPage:(id)arg2 ;
-(void)setLastSeenPage:(IGEventFeedData *)arg1 ;
-(void)appendPage:(id)arg1 ;
-(void)updateWithLastSeenPost:(id)arg1 inSection:(unsigned)arg2 ;
-(IGEventFeedData *)lastSeenPage;
-(id)init;
-(NSMutableArray *)pages;
-(void)setPages:(NSMutableArray *)arg1 ;
@end

