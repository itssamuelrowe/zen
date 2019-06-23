// Sunday, April 28, 2018

#ifndef ZEN_AST_AST_ANNOTATION_TYPE_H
#define ZEN_AST_AST_ANNOTATION_TYPE_H

/*******************************************************************************
 * AstAnnotationType                                                           *
 *******************************************************************************/

/**
 * @author Samuel Rowe
 * @since  zen 1.0
 */
enum zen_AstAnnotationType_t {

    /**
     * A situation where certain instructions are required to be inserted between
     * the instructions of multiple productions of a single rule may arise when the
     * productions have a common ancestor. In such situations, the byte code generated
     * for a production is redirected to a new channel. An asymetrical location for
     * pushing and popping of channels is necessary. Here, a new channel is pushed
     * by the production rule on request by the ancestor. It is popped off by the
     * ancestor.
     *
     * The communication between the ancestor and the production rule occurs via
     * an AST node annotation. The bundle is null.
     */
    ZEN_AST_ANNOTATION_TYPE_ASYMETRICAL_CHANNEL_MANAGEMENT,

    ZEN_AST_ANNOTATION_TYPE_CUSTOM
};

typedef enum zen_AstAnnotationType_t zen_AstAnnotationType_t;

#endif /* ZEN_AST_AST_ANNOTATION_TYPE_H */