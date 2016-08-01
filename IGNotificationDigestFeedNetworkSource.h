
#import <Instagram/IGFeedNetworkSource.h>

@class NSString;

@interface IGNotificationDigestFeedNetworkSource : IGFeedNetworkSource {

	NSString* _forcedUserIDs;

}

@property (nonatomic,retain) NSString * forcedUserIDs;              //@synthesize forcedUserIDs=_forcedUserIDs - In the implementation block
-(NSString *)forcedUserIDs;
-(void)setForcedUserIDs:(NSString *)arg1 ;
-(id)initWithPostClass:(Class)arg1 userSession:(id)arg2 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(void)loadPromotionBannerInfoFromResponse:(id)arg1 ;
@end

