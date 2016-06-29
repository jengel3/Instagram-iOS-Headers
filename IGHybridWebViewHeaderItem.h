
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGHybridWebViewHeaderItem : NSObject <NSCopying> {

	char _isRightButtonActive;
	char _isLeftButtonActive;
	char _isLoading;
	NSString* _title;
	NSString* _screenId;
	unsigned _leftButtonType;
	NSString* _leftButtonJSCallback;
	NSString* _rightButtonTitle;
	NSString* _rightButtonJSCallback;

}

@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * screenId;                           //@synthesize screenId=_screenId - In the implementation block
@property (assign,nonatomic) unsigned leftButtonType;                     //@synthesize leftButtonType=_leftButtonType - In the implementation block
@property (nonatomic,copy) NSString * leftButtonJSCallback;               //@synthesize leftButtonJSCallback=_leftButtonJSCallback - In the implementation block
@property (nonatomic,copy) NSString * rightButtonTitle;                   //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * rightButtonJSCallback;              //@synthesize rightButtonJSCallback=_rightButtonJSCallback - In the implementation block
@property (assign,nonatomic) char isRightButtonActive;                    //@synthesize isRightButtonActive=_isRightButtonActive - In the implementation block
@property (assign,nonatomic) char isLeftButtonActive;                     //@synthesize isLeftButtonActive=_isLeftButtonActive - In the implementation block
@property (assign,nonatomic) char isLoading;                              //@synthesize isLoading=_isLoading - In the implementation block
@property (readonly) char hasRightButton; 
+(id)itemWithWebViewParams:(id)arg1 ;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(NSString *)rightButtonTitle;
-(NSString *)screenId;
-(void)setIsLeftButtonActive:(char)arg1 ;
-(void)setIsRightButtonActive:(char)arg1 ;
-(void)setLeftButtonJSCallback:(NSString *)arg1 ;
-(void)setLeftButtonType:(unsigned)arg1 ;
-(void)setRightButtonJSCallback:(NSString *)arg1 ;
-(NSString *)leftButtonJSCallback;
-(NSString *)rightButtonJSCallback;
-(void)setScreenId:(NSString *)arg1 ;
-(unsigned)leftButtonType;
-(char)isLeftButtonActive;
-(char)hasRightButton;
-(char)isRightButtonActive;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
@end

