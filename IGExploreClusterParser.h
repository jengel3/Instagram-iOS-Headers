
#import <Instagram/IGNetworkParser.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IGExploreClusterParser : NSObject <IGNetworkParser> {

	NSObject*<OS_dispatch_queue> _parsingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parsingQueue;              //@synthesize parsingQueue=_parsingQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)parsingQueue;
-(id)parsedObjectFromResponse:(id)arg1 ;
-(void)setParsingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

