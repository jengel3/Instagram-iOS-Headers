
#import <Instagram/GTMLogWriter.h>

@protocol GTMLogWriter, GTMLogFormatter, GTMLogFilter;
@class NSString;

@interface GTMLogger : NSObject <GTMLogWriter> {

	id<GTMLogWriter> writer_;
	id<GTMLogFormatter> formatter_;
	id<GTMLogFilter> filter_;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)standardLogger;
+(id)loggerWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3 ;
+(void)setSharedLogger:(id)arg1 ;
+(id)standardLoggerWithStderr;
+(id)standardLoggerWithStdoutAndStderr;
+(id)standardLoggerWithPath:(id)arg1 ;
+(id)logger;
+(id)sharedLogger;
-(id)initWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3 ;
-(void)logInternalFunc:(const char*)arg1 format:(id)arg2 valist:(void*)arg3 level:(int)arg4 ;
-(void)logDebug:(id)arg1 ;
-(void)logAssert:(id)arg1 ;
-(void)logFuncDebug:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncInfo:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncError:(const char*)arg1 msg:(id)arg2 ;
-(void)logFuncAssert:(const char*)arg1 msg:(id)arg2 ;
-(void)logMessage:(id)arg1 level:(int)arg2 ;
-(id)formatter;
-(void)setFormatter:(id)arg1 ;
-(id)filter;
-(void)dealloc;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(void)logError:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(id)writer;
-(void)setWriter:(id)arg1 ;
@end

