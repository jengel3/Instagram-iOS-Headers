
#import <Instagram/GTMLogFilter.h>

@class NSString;

@interface GTMLogLevelFilter : NSObject <GTMLogFilter>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)filterAllowsMessage:(id)arg1 level:(int)arg2 ;
@end

