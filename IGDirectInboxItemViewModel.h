

@class IGUser, NSAttributedString, NSURL;

@interface IGDirectInboxItemViewModel : NSObject {

	char _hasNewContent;
	IGUser* _firstUser;
	IGUser* _secondUser;
	NSAttributedString* _attributedText;
	NSURL* _imageURL;

}

@property (nonatomic,readonly) char hasNewContent;                               //@synthesize hasNewContent=_hasNewContent - In the implementation block
@property (nonatomic,readonly) IGUser * firstUser;                               //@synthesize firstUser=_firstUser - In the implementation block
@property (nonatomic,readonly) IGUser * secondUser;                              //@synthesize secondUser=_secondUser - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
-(id)initWithThread:(id)arg1 cellHeight:(float)arg2 ;
-(id)accessibilityLabelFromThread:(id)arg1 ;
-(char)hasNewContentInThread:(id)arg1 ;
-(id)buildAttributedTextFromThread:(id)arg1 ;
-(id)mostRecentImageURLFromThread:(id)arg1 imageHeight:(float)arg2 ;
-(id)nameAttributes;
-(id)messageAttributes;
-(id)timestampAttributes;
-(char)hasNewContent;
-(IGUser *)firstUser;
-(IGUser *)secondUser;
-(NSAttributedString *)attributedText;
-(id)paragraphStyle;
-(NSURL *)imageURL;
@end

