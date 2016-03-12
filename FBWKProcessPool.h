

@protocol FBWebViewAnalytics;
@class NSMutableArray, WKProcessPool;

@interface FBWKProcessPool : NSObject {

	NSMutableArray* _completionHandlers;
	id<FBWebViewAnalytics> _analytics;
	char _initialized;
	char _invalidated;
	WKProcessPool* _wkProcessPool;

}

@property (nonatomic,readonly) WKProcessPool * wkProcessPool;              //@synthesize wkProcessPool=_wkProcessPool - In the implementation block
+(id)wkProcessPoolForContainer:(id)arg1 analytics:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WKProcessPool *)wkProcessPool;
-(id)init;
-(void)invalidate;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
@end

