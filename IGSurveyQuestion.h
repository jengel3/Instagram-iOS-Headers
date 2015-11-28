

@class NSString, NSArray;

@interface IGSurveyQuestion : NSObject {

	char _showPrimerView;
	int _answerStyle;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _possibleAnswers;
	NSString* _surveyID;
	NSString* _trackingToken;
	NSString* _headerText;

}

@property (assign,nonatomic) int answerStyle;                        //@synthesize answerStyle=_answerStyle - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSArray * possibleAnswers;              //@synthesize possibleAnswers=_possibleAnswers - In the implementation block
@property (nonatomic,retain) NSString * surveyID;                    //@synthesize surveyID=_surveyID - In the implementation block
@property (nonatomic,retain) NSString * trackingToken;               //@synthesize trackingToken=_trackingToken - In the implementation block
@property (nonatomic,retain) NSString * headerText;                  //@synthesize headerText=_headerText - In the implementation block
@property (assign,nonatomic) char showPrimerView;                    //@synthesize showPrimerView=_showPrimerView - In the implementation block
+(id)questionForServerMessage:(id)arg1 ;
+(id)mockSurveyJSON;
-(NSString *)trackingToken;
-(char)showPrimerView;
-(NSString *)surveyID;
-(void)setTrackingToken:(NSString *)arg1 ;
-(void)setAnswerStyle:(int)arg1 ;
-(void)setPossibleAnswers:(NSArray *)arg1 ;
-(NSArray *)possibleAnswers;
-(void)setSurveyID:(NSString *)arg1 ;
-(int)answerStyle;
-(void)setShowPrimerView:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
@end

