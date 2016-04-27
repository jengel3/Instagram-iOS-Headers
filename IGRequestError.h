
#import <Foundation/NSError.h>

@class NSString, NSURL;

@interface IGRequestError : NSError

@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSURL * helpURL; 
@property (nonatomic,readonly) char isSpam; 
@property (nonatomic,readonly) char isFeedbackRequired; 
@property (nonatomic,readonly) int statusCode; 
@property (nonatomic,readonly) int originalErrorCode; 
+(id)errorWithError:(id)arg1 statusCode:(int)arg2 ;
+(id)errorWithStatusCode:(int)arg1 message:(id)arg2 helpURL:(id)arg3 isSpam:(char)arg4 feedbackRequired:(char)arg5 originalErrorCode:(int)arg6 extraUserInfo:(id)arg7 ;
-(int)originalErrorCode;
-(id)errorStringForAnalytics;
-(char)isSpam;
-(char)isFeedbackRequired;
-(NSString *)message;
-(int)statusCode;
-(NSURL *)helpURL;
@end

