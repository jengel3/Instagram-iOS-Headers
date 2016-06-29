
#import <Instagram/IGFeedNetworkSource.h>

@class NSArray;

@interface IGExplorePhotosNetworkSource : IGFeedNetworkSource {

	char _shouldShowPromptInThisSession;
	NSArray* _trends;
	NSArray* _marqueeItems;

}

@property (retain) NSArray * trends;                                          //@synthesize trends=_trends - In the implementation block
@property (retain) NSArray * marqueeItems;                                    //@synthesize marqueeItems=_marqueeItems - In the implementation block
@property (assign,nonatomic) char shouldShowPromptInThisSession;              //@synthesize shouldShowPromptInThisSession=_shouldShowPromptInThisSession - In the implementation block
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(void)loadFromCache;
-(NSArray *)marqueeItems;
-(char)hasJumbotronInfo;
-(char)fetchDataWithParameters:(id)arg1 priority:(int)arg2 ;
-(NSArray *)trends;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(char)shouldShowPromptInThisSession;
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 fetchPath:(id)arg3 ;
-(void)loadMarqueeFromResponse:(id)arg1 ;
-(void)loadTrendsFromResponse:(id)arg1 ;
-(void)cacheMarqueeItems:(id)arg1 ;
-(void)cacheTrends:(id)arg1 ;
-(void)setShouldShowPromptInThisSession:(char)arg1 ;
@end

