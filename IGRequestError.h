
#import <Foundation/NSError.h>

@class NSString, NSURL;

@interface IGRequestError : NSError

@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSURL * helpURL; 
@property (nonatomic,readonly) char isSpam; 
@property (nonatomic,readonly) char isFeedbackRequired; 
@property (nonatomic,readonly) int statusCode; 
@property (nonatomic,readonly) int originalErrorCode; 
+(id)errorWithStatusCode:(int)arg1 message:(id)arg2 helpURL:(id)arg3 isSpam:(char)arg4 feedbackRequired:(char)arg5 originalErrorCode:(int)arg6 extraUserInfo:(id)arg7 ;
+(id)errorWithError:(id)arg1 statusCode:(int)arg2 ;
-(int)originalErrorCode;
-(char)isSpam;
-(char)isFeedbackRequired;
-(id)errorStringForAnalytics;
-(NSString *)message;
-(int)statusCode;
-(NSURL *)helpURL;
@end

