
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGDirectLinkPreviewDelegate;
@class NSString, NSArray, IGButton, IGDirectLinkPreview;

@interface IGDirectLinkPreviewManager : NSObject <IGMediaRequestDelegate> {

	char _showLinkPreview;
	id<IGDirectLinkPreviewDelegate> _delegate;
	NSString* _linkStorageKey;
	NSArray* _previewLinks;
	IGButton* _sendButton;
	IGDirectLinkPreview* _linkPreview;
	NSArray* _urlsParsedFromPreviousText;

}

@property (assign,nonatomic,__weak) IGButton * sendButton;                                 //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic,__weak) IGDirectLinkPreview * linkPreview;                     //@synthesize linkPreview=_linkPreview - In the implementation block
@property (assign,nonatomic) char showLinkPreview;                                         //@synthesize showLinkPreview=_showLinkPreview - In the implementation block
@property (nonatomic,retain) NSArray * urlsParsedFromPreviousText;                         //@synthesize urlsParsedFromPreviousText=_urlsParsedFromPreviousText - In the implementation block
@property (nonatomic,retain) NSArray * previewLinks;                                       //@synthesize previewLinks=_previewLinks - In the implementation block
@property (nonatomic,retain) NSString * linkStorageKey;                                    //@synthesize linkStorageKey=_linkStorageKey - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectLinkPreviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)setLinkPreview:(IGDirectLinkPreview *)arg1 ;
-(IGDirectLinkPreview *)linkPreview;
-(void)setUrlsParsedFromPreviousText:(NSArray *)arg1 ;
-(void)enableSend:(char)arg1 ;
-(void)linkPreviewInitiated;
-(void)updateLinkForState:(unsigned)arg1 onlyContainsOneLink:(char)arg2 ;
-(void)updateLinkPreviewWithTextView:(id)arg1 newURLs:(id)arg2 onlyContainsOneLink:(char)arg3 ;
-(NSArray *)urlsParsedFromPreviousText;
-(char)linkPreviewInError;
-(void)showLinkPreview:(char)arg1 ;
-(void)setLinkStorageKey:(NSString *)arg1 ;
-(void)setPreviewLinks:(NSArray *)arg1 ;
-(NSArray *)previewLinks;
-(void)linkPreviewFailed;
-(void)sanityCheckUrls:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(char)showLinkPreview;
-(void)setShowLinkPreview:(char)arg1 ;
-(id)initWithSendButton:(id)arg1 linkPreview:(id)arg2 ;
-(void)checkForLink:(id)arg1 ;
-(NSString *)linkStorageKey;
-(void)setDelegate:(id<IGDirectLinkPreviewDelegate>)arg1 ;
-(id<IGDirectLinkPreviewDelegate>)delegate;
-(void)reset;
-(void)setLink:(id)arg1 ;
-(IGButton *)sendButton;
-(void)setSendButton:(IGButton *)arg1 ;
@end

