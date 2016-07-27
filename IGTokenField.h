
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDynamicCollectionViewDatasource.h>
#import <Instagram/IGDynamicCollectionViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGTokenViewDelegate.h>
#import <Instagram/IGUsertagViewDelegate.h>

@protocol IGTokenFieldDelegate;
@class NSMutableOrderedSet, NSMutableArray, UIView, IGDynamicCollectionView, UILabel, IGTextField, IGUsertagView, NSString, NSSet;

@interface IGTokenField : UIView <IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate, UITextFieldDelegate, IGTextFieldDelegate, IGTokenViewDelegate, IGUsertagViewDelegate> {

	char _isEditing;
	char _shadowVisible;
	char _isDisabled;
	float _tokenHeight;
	unsigned _tokenType;
	id<IGTokenFieldDelegate> _delegate;
	NSMutableOrderedSet* _tokens;
	NSMutableArray* _tokenViews;
	UIView* _borderedView;
	IGDynamicCollectionView* _collectionView;
	UILabel* _toLabel;
	IGTextField* _searchField;
	IGUsertagView* _usertagView;
	CGSize _contentSize;

}

@property (nonatomic,retain) NSMutableOrderedSet * tokens;                          //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokenViews;                           //@synthesize tokenViews=_tokenViews - In the implementation block
@property (nonatomic,retain) UIView * borderedView;                                 //@synthesize borderedView=_borderedView - In the implementation block
@property (nonatomic,retain) IGDynamicCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * toLabel;                                     //@synthesize toLabel=_toLabel - In the implementation block
@property (nonatomic,retain) IGTextField * searchField;                             //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,retain) IGUsertagView * usertagView;                           //@synthesize usertagView=_usertagView - In the implementation block
@property (assign,nonatomic) char isEditing;                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,copy) NSString * query; 
@property (assign,nonatomic) float tokenHeight;                                     //@synthesize tokenHeight=_tokenHeight - In the implementation block
@property (nonatomic,readonly) NSSet * tokenObjects; 
@property (nonatomic,readonly) CGSize contentSize;                                  //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) char shadowVisible;                                    //@synthesize shadowVisible=_shadowVisible - In the implementation block
@property (assign,nonatomic) unsigned tokenType;                                    //@synthesize tokenType=_tokenType - In the implementation block
@property (assign,nonatomic) char isDisabled;                                       //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGTokenFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsEditing:(char)arg1 ;
-(int)numberOfViewsForCollectionView:(id)arg1 ;
-(id)viewForCollectionView:(id)arg1 atIndex:(int)arg2 ;
-(void)collectionView:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)collectionView:(id)arg1 didTapItemAtIndex:(int)arg2 ;
-(void)addTokens:(id)arg1 animated:(char)arg2 ;
-(void)setTokenHeight:(float)arg1 ;
-(NSSet *)tokenObjects;
-(void)removeTokens:(id)arg1 animated:(char)arg2 ;
-(void)removeToken:(id)arg1 animated:(char)arg2 ;
-(void)addToken:(id)arg1 animated:(char)arg2 ;
-(UIView *)borderedView;
-(UILabel *)toLabel;
-(void)updateSearchFieldPlaceholder;
-(void)updateSearchFieldIconAndWidth;
-(NSMutableArray *)tokenViews;
-(id)currentResponder;
-(void)hideUsertagViewAnimated:(char)arg1 ;
-(void)checkEditingStatus;
-(IGUsertagView *)usertagView;
-(void)showUsertagViewForTokenView:(id)arg1 ;
-(void)setUsertagView:(IGUsertagView *)arg1 ;
-(void)tokenViewDidBecomeFirstResponder:(id)arg1 ;
-(void)tokenViewDidResignFirstResponder:(id)arg1 ;
-(void)tokenViewWantsDelete:(id)arg1 replacementString:(id)arg2 ;
-(char)tagViewCanBeSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(void)setShadowVisible:(char)arg1 ;
-(float)tokenHeight;
-(char)shadowVisible;
-(void)setTokenViews:(NSMutableArray *)arg1 ;
-(void)setBorderedView:(UIView *)arg1 ;
-(void)setToLabel:(UILabel *)arg1 ;
-(void)setSearchField:(IGTextField *)arg1 ;
-(void)textFieldDidTapBackspaceKey:(id)arg1 previousText:(id)arg2 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTokenFieldDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGTokenFieldDelegate>)delegate;
-(CGSize)contentSize;
-(NSString *)query;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(char)isEditing;
-(IGDynamicCollectionView *)collectionView;
-(void)setQuery:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)searchField;
-(void)setCollectionView:(IGDynamicCollectionView *)arg1 ;
-(NSMutableOrderedSet *)tokens;
-(void)setIsDisabled:(char)arg1 ;
-(void)setTokens:(NSMutableOrderedSet *)arg1 ;
-(void)setTokenType:(unsigned)arg1 ;
-(unsigned)tokenType;
-(char)isDisabled;
@end

