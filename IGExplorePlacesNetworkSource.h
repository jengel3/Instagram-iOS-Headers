
#import <Instagram/IGExploreNetworkSource.h>

@interface IGExplorePlacesNetworkSource : IGExploreNetworkSource

@property (assign,nonatomic,__weak) id<IGExplorePlacesNetworkSourceDelegate> delegate; 
+(id)explorePlacesFeedNetworkSource;
-(char)fetchDataWithParameters:(id)arg1 ;
@end

