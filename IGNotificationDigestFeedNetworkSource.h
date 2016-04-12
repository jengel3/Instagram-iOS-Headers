
#import <Instagram/IGFeedNetworkSource.h>

@class NSString;

@interface IGNotificationDigestFeedNetworkSource : IGFeedNetworkSource {

	NSString* _forcedUserIDs;

}

@property (nonatomic,retain) NSString * forcedUserIDs;              //@synthesize forcedUserIDs=_forcedUserIDs - In the implementation block
-(id)initWithPostClass:(Class)arg1 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(NSString *)forcedUserIDs;
-(void)setForcedUserIDs:(NSString *)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)loadPromotionBannerInfoFromResponse:(id)arg1 ;
@end

