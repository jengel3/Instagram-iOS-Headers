
#import <Instagram/IGExploreNetworkSource.h>

@interface IGExplorePlacesNetworkSource : IGExploreNetworkSource

@property (assign,nonatomic) id<IGExplorePlacesNetworkSourceDelegate> delegate; 
+(id)explorePlacesFeedNetworkSource;
-(char)fetchDataWithParameters:(id)arg1 ;
@end

