
#import <Instagram/GTMLogFilter.h>

@class NSIndexSet, NSString;

@interface GTMLogAllowedLevelFilter : NSObject <GTMLogFilter> {

	NSIndexSet* allowedLevels_;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)filterAllowsMessage:(id)arg1 level:(int)arg2 ;
-(id)initWithAllowedLevels:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

