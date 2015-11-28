
#import <Instagram/IGFeedNetworkSource.h>

@class NSString;

@interface IGNotificationDigestFeedNetworkSource : IGFeedNetworkSource {

	NSString* _forcedUserIDs;

}

@property (nonatomic,retain) NSString * forcedUserIDs;              //@synthesize forcedUserIDs=_forcedUserIDs - In the implementation block
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)setForcedUserIDs:(NSString *)arg1 ;
-(id)initWithPostClass:(Class)arg1 ;
-(NSString *)forcedUserIDs;
@end

