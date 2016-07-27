
#import <Instagram/IGDirectAckPayloadParsing.h>

@class NSString;

@interface IGDirectAckPayloadParser : NSObject <IGDirectAckPayloadParsing>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parsePayload:(id)arg1 ;
@end

