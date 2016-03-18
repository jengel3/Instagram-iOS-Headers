
#import <Instagram/IGFeedNetworkSource.h>

@class NSArray, NSString;

@interface IGExplorePhotosNetworkSource : IGFeedNetworkSource {

	NSArray* _profileTeaserUsers;
	NSString* _peopleTeaserByline;
	NSArray* _trends;
	NSArray* _marqueeItems;

}

@property (retain) NSArray * profileTeaserUsers;              //@synthesize profileTeaserUsers=_profileTeaserUsers - In the implementation block
@property (copy) NSString * peopleTeaserByline;               //@synthesize peopleTeaserByline=_peopleTeaserByline - In the implementation block
@property (retain) NSArray * trends;                          //@synthesize trends=_trends - In the implementation block
@property (retain) NSArray * marqueeItems;                    //@synthesize marqueeItems=_marqueeItems - In the implementation block
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadFromCache;
-(NSArray *)marqueeItems;
-(char)hasPeopleEntryInfo;
-(char)hasJumbotronInfo;
-(char)fetchDataWithParameters:(id)arg1 priority:(int)arg2 ;
-(NSArray *)profileTeaserUsers;
-(void)setProfileTeaserUsers:(NSArray *)arg1 ;
-(NSString *)peopleTeaserByline;
-(void)setPeopleTeaserByline:(NSString *)arg1 ;
-(NSArray *)trends;
-(void)setTrends:(NSArray *)arg1 ;
-(void)setMarqueeItems:(NSArray *)arg1 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)loadMarqueeFromResponse:(id)arg1 ;
-(void)loadPeopleTeaserEntriesFromResponse:(id)arg1 ;
-(void)loadTrendsFromResponse:(id)arg1 ;
-(void)cacheMarqueeItems:(id)arg1 ;
-(void)cacheTrends:(id)arg1 ;
-(id)init;
@end

