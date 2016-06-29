
#import <Instagram/IGDKDiffable.h>

@class NSString, IGUser, NSURL, UIImage;

@interface IGDirectInboxThreadCellViewModel : NSObject <IGDKDiffable> {

	char _hasNewContent;
	char _isMuted;
	char _isSwipedOpen;
	NSString* _threadId;
	float _cellHeight;
	IGUser* _firstUser;
	IGUser* _secondUser;
	NSString* _usernameText;
	NSString* _messageText;
	NSString* _timestampText;
	NSString* _muteButtonText;
	NSURL* _imageURL;
	UIImage* _placeholderImage;

}

@property (nonatomic,readonly) NSString * threadId;                     //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) float cellHeight;                        //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,readonly) char hasNewContent;                      //@synthesize hasNewContent=_hasNewContent - In the implementation block
@property (nonatomic,readonly) char isMuted;                            //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) IGUser * firstUser;                      //@synthesize firstUser=_firstUser - In the implementation block
@property (nonatomic,readonly) IGUser * secondUser;                     //@synthesize secondUser=_secondUser - In the implementation block
@property (nonatomic,readonly) NSString * usernameText;                 //@synthesize usernameText=_usernameText - In the implementation block
@property (nonatomic,readonly) NSString * messageText;                  //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,readonly) NSString * timestampText;                //@synthesize timestampText=_timestampText - In the implementation block
@property (nonatomic,readonly) NSString * muteButtonText;               //@synthesize muteButtonText=_muteButtonText - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) char isSwipedOpen;                         //@synthesize isSwipedOpen=_isSwipedOpen - In the implementation block
-(id)diffIdentifier;
-(char)hasNewContent;
-(NSString *)usernameText;
-(NSString *)timestampText;
-(IGUser *)firstUser;
-(IGUser *)secondUser;
-(NSString *)muteButtonText;
-(char)isSwipedOpen;
-(char)hasNewContentFromThreadTransformer:(id)arg1 ;
-(id)usernameTextFromThread:(id)arg1 ;
-(id)messageTextFromThreadDataTransformer:(id)arg1 ;
-(id)mostRecentImageURLFromImageURLProvider:(id)arg1 imageHeight:(float)arg2 ;
-(id)preloadedImageFromImageURLProvider:(id)arg1 ;
-(id)muteButtonTextFromThread:(id)arg1 ;
-(id)accessibilityLabelFromThread:(id)arg1 transformer:(id)arg2 ;
-(void)setIsSwipedOpen:(char)arg1 ;
-(float)cellHeight;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIImage *)placeholderImage;
-(NSString *)messageText;
-(id)initWithThread:(id)arg1 ;
-(char)isMuted;
-(NSString *)threadId;
-(NSURL *)imageURL;
@end

