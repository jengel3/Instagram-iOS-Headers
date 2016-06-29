
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGAnnouncer.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGTextViewDelegate;
@class NSString;

@interface IGTextViewAnnouncer : IGAnnouncer <UITextViewDelegate> {

	id<IGTextViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<IGTextViewDelegate>)arg1 ;
-(id<IGTextViewDelegate>)delegate;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textViewShouldEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

