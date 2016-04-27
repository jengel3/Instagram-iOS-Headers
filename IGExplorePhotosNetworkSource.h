
#import <Instagram/IGFeedNetworkSource.h>

@class NSArray;

@interface IGExplorePhotosNetworkSource : IGFeedNetworkSource {

	NSArray* _trends;
	NSArray* _marqueeItems;

}

@property (retain) NSArray * trends;                    //@synthesize trends=_trends - In the implementation block
@property (retain) NSArray * marqueeItems;              //@synthesize marqueeItems=_marqueeItems - In the implementation block
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(void)loadFromCache;
-(NSArray *)marqueeItems;
-(char)hasJumbotronInfo;
-(char)fetchDataWithParameters:(id)arg1 priority:(int)arg2 ;
-(NSArray *)trends;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 fetchPath:(id)arg3 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)loadMarqueeFromResponse:(id)arg1 ;
-(void)loadTrendsFromResponse:(id)arg1 ;
-(void)cacheMarqueeItems:(id)arg1 ;
-(void)cacheTrends:(id)arg1 ;
@end

