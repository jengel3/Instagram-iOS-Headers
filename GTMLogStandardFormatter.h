
#import <Instagram/GTMLogBasicFormatter.h>

@class NSDateFormatter, NSString;

@interface GTMLogStandardFormatter : GTMLogBasicFormatter {

	NSDateFormatter* dateFormatter_;
	NSString* pname_;
	int pid_;

}
-(id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(void*)arg3 level:(int)arg4 ;
-(void)dealloc;
-(id)init;
@end

