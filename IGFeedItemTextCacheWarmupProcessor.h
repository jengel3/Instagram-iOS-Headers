
#import <Instagram/IGPagingListAdapterControllerItemProcessing.h>

@protocol IGFeedItemConfigurationType;
@class NSString;

@interface IGFeedItemTextCacheWarmupProcessor : NSObject <IGPagingListAdapterControllerItemProcessing> {

	id<IGFeedItemConfigurationType> _config;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processNewItems:(id)arg1 containerWidth:(float)arg2 ;
-(id)initWithConfig:(id)arg1 ;
@end

