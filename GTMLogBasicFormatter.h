
#import <Instagram/GTMLogFormatter.h>

@class NSString;

@interface GTMLogBasicFormatter : NSObject <GTMLogFormatter>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(void*)arg3 level:(int)arg4 ;
-(id)prettyNameForFunc:(id)arg1 ;
@end

