
#import <Instagram/IGGraphQLCachePolicy.h>

@class NSString;

@interface IGAdsManagerCachePolicy : NSObject <IGGraphQLCachePolicy>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isCacheValidForRequest:(id)arg1 cachedObject:(id)arg2 ;
@end

