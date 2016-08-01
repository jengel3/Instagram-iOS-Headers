
#import <Instagram/IGDKDiffable.h>

@class NSString, IGUser, NSAttributedString, NSURL, UIImage, IGDirectInboxCellButtonConfig;

@interface IGDirectInboxThreadCellViewModel : NSObject <IGDKDiffable> {

	char _displaysUnreadIndicator;
	char _isMuted;
	char _isPending;
	char _shouldHideThumbnail;
	char _isSwipedOpen;
	char _isSelected;
	char _isEditable;
	NSString* _threadId;
	float _cellHeight;
	IGUser* _firstUser;
	IGUser* _secondUser;
	NSString* _nameText;
	NSAttributedString* _messageText;
	NSString* _timestampText;
	NSURL* _imageURL;
	UIImage* _placeholderImage;
	IGDirectInboxCellButtonConfig* _buttonConfig;
	NSString* _currentUserPK;

}

@property (nonatomic,readonly) NSString * currentUserPK;                                //@synthesize currentUserPK=_currentUserPK - In the implementation block
@property (nonatomic,readonly) NSString * threadId;                                     //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) float cellHeight;                                        //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,readonly) char displaysUnreadIndicator;                            //@synthesize displaysUnreadIndicator=_displaysUnreadIndicator - In the implementation block
@property (nonatomic,readonly) char isMuted;                                            //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) char isPending;                                          //@synthesize isPending=_isPending - In the implementation block
@property (nonatomic,readonly) IGUser * firstUser;                                      //@synthesize firstUser=_firstUser - In the implementation block
@property (nonatomic,readonly) IGUser * secondUser;                                     //@synthesize secondUser=_secondUser - In the implementation block
@property (nonatomic,readonly) NSString * nameText;                                     //@synthesize nameText=_nameText - In the implementation block
@property (nonatomic,readonly) NSAttributedString * messageText;                        //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,readonly) NSString * timestampText;                                //@synthesize timestampText=_timestampText - In the implementation block
@property (nonatomic,readonly) char shouldHideThumbnail;                                //@synthesize shouldHideThumbnail=_shouldHideThumbnail - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) IGDirectInboxCellButtonConfig * buttonConfig;              //@synthesize buttonConfig=_buttonConfig - In the implementation block
@property (assign,nonatomic) char isSwipedOpen;                                         //@synthesize isSwipedOpen=_isSwipedOpen - In the implementation block
@property (assign,nonatomic) char isSelected;                                           //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) char isEditable;                                           //@synthesize isEditable=_isEditable - In the implementation block
-(id)diffIdentifier;
-(void)setIsSwipedOpen:(char)arg1 ;
-(char)displaysUnreadIndicator;
-(NSString *)timestampText;
-(char)shouldHideThumbnail;
-(IGUser *)firstUser;
-(IGUser *)secondUser;
-(IGDirectInboxCellButtonConfig *)buttonConfig;
-(char)isSwipedOpen;
-(id)usernameTextFromThread:(id)arg1 ;
-(id)messageTextFromThread:(id)arg1 ;
-(id)mostRecentImageURLFromImageURLProvider:(id)arg1 imageHeight:(float)arg2 ;
-(id)preloadedImageFromImageURLProvider:(id)arg1 ;
-(id)buttonConfigFromThread:(id)arg1 ;
-(id)accessibilityLabelFromThread:(id)arg1 ;
-(void)setButtonConfig:(IGDirectInboxCellButtonConfig *)arg1 ;
-(id)initWithThread:(id)arg1 currentUserPK:(id)arg2 ;
-(NSString *)currentUserPK;
-(float)cellHeight;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isEditable;
-(char)isSelected;
-(UIImage *)placeholderImage;
-(void)setIsSelected:(char)arg1 ;
-(NSAttributedString *)messageText;
-(void)setIsEditable:(char)arg1 ;
-(char)isPending;
-(NSString *)nameText;
-(char)isMuted;
-(NSString *)threadId;
-(NSURL *)imageURL;
@end

