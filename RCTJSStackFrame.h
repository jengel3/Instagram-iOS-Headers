

@class NSString;

@interface RCTJSStackFrame : NSObject {

	NSString* _methodName;
	NSString* _file;
	int _lineNumber;
	int _column;

}

@property (nonatomic,copy,readonly) NSString * methodName;              //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy,readonly) NSString * file;                    //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) int lineNumber;                          //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,readonly) int column;                              //@synthesize column=_column - In the implementation block
+(id)stackFrameWithLine:(id)arg1 ;
+(id)stackFrameWithDictionary:(id)arg1 ;
+(id)stackFramesWithLines:(id)arg1 ;
+(id)stackFramesWithDictionaries:(id)arg1 ;
-(NSString *)methodName;
-(id)initWithMethodName:(id)arg1 file:(id)arg2 lineNumber:(int)arg3 column:(int)arg4 ;
-(int)lineNumber;
-(int)column;
-(NSString *)file;
-(id)toDictionary;
@end

