
#import <Instagram/TProtocolFactory.h>

@class NSString;

@interface TCompactProtocolFactory : NSObject <TProtocolFactory>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFactory;
-(id)newProtocolOnTransport:(id)arg1 ;
@end

