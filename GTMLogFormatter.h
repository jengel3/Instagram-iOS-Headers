

@protocol GTMLogFormatter <NSObject>
@required
-(id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(void*)arg3 level:(int)arg4;

@end

