
#import <Instagram/IGDirectResponseLogging.h>

@protocol IGFeedItemDirectResponseLoggingProviderDelegate;
@class NSString;

@interface IGDirectResponseLogger : NSObject <IGDirectResponseLogging> {

	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	NSString* _analyticsModule;

}

@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(void)logActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 openContext:(id)arg3 linkType:(int)arg4 ;
-(void)logActionFailedForFeedItem:(id)arg1 directResponseInfo:(id)arg2 openContext:(id)arg3 openTarget:(id)arg4 ;
-(id)initWithLoggingDelegate:(id)arg1 analyticsModule:(id)arg2 ;
@end

