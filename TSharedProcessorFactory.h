
#import <Instagram/TProcessorFactory.h>

@protocol TProcessor;
@class NSString;

@interface TSharedProcessorFactory : NSObject <TProcessorFactory> {

	id<TProcessor> mSharedProcessor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processorForTransport:(id)arg1 ;
-(id)initWithSharedProcessor:(id)arg1 ;
-(void)dealloc;
@end

